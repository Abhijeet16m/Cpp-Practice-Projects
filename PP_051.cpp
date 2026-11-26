#include<bits/stdc++.h>
using namespace std;
// well I can use sort function but what's the fun in that...

// void merge(vector<int> &v, int start, int end){
//     vector<int> temp;
//     int mid = start + (end-start)/2;
//     int i = start;
//     int j = mid+1;
//     while(i <= mid && j <= end){
//         if(v[i] < v[j]){
//             temp.push_back(v[i]); i++;
//         }
//         else{
//             temp.push_back(v[j]); j++;
//         }
//     }
//     while(i <= mid){
//         temp.push_back(v[i]); i++;
//     }
//     while(j <= end){
//         temp.push_back(v[j]); j++;
//     }
//     for(int _ = start; _ <= end; _++){
//         v[_] = temp[_-start];
//     }
// }

// void mergeSort(vector<int> &v, int start, int end){
//     if(start >= end) return;
//     int mid = start + (end-start)/2;
//     mergeSort(v, start, mid);
//     mergeSort(v, mid+1, end);
//     merge(v, start, end);
// }

// int partition(vector<int> &v, int start, int end){
//     int i = start;
//     int j = end-1;
//     int pivot = v[end];
//     while(i <= j){
//         if(v[j] <= pivot){
//             swap(v[i], v[j]);
//             i++;
//         }
//         else{
//             j--;
//         }
//     }
//     swap(v[i], v[end]);
//     return i;
// }

// void quickSort(vector<int> &v, int start, int end){
//     if(start >= end) return;
//     int p = partition(v, start, end);
//     quickSort(v, start, p-1);
//     quickSort(v, p+1, end);
// }

class Algorithm {
    template<typename T, typename Compare>
    static void merge(vector<T> &v, int start, int end, Compare cmp){
        vector<T> temp;
            int mid = start + (end-start)/2;
            int i = start;
            int j = mid+1;
            while(i <= mid && j <= end){
                if(!cmp(v[j], v[i])){
                    temp.push_back(v[i]); i++;
                }
                else{
                    temp.push_back(v[j]); j++;
                }
            }
            while(i <= mid){
                temp.push_back(v[i]); i++;
            }
            while(j <= end){
                temp.push_back(v[j]); j++;
            }
            for(int _ = start; _ <= end; _++){
                v[_] = temp[_-start];
            }
    }

    template<typename T, typename Compare>
    static int partition(vector<T> &v, int start, int end, Compare cmp){
        int i = start;
        int j = end-1;
        T pivot = v[end];
        while(i <= j){
            if(!cmp(pivot, v[j])){
                swap(v[i], v[j]);
                i++;
            }
            else{
                j--;
            }
        }
        swap(v[i], v[end]);
        return i;
    }

    template<typename T, typename Compare>
    static void mergesortAlgo(vector<T> &v, int start, int end, Compare cmp){
        if(start >= end) return;
        int mid = start + (end-start)/2;
        mergesortAlgo(v, start, mid, cmp);
        mergesortAlgo(v, mid+1, end, cmp);
        merge(v, start, end, cmp);
    }

    template<typename T, typename Compare>
    static void quickSortAlgo(vector<T> &v, int start, int end, Compare cmp){
        if(start >= end) return;
        int p = partition(v, start, end, cmp);
        quickSortAlgo(v, start, p-1, cmp);
        quickSortAlgo(v, p+1, end, cmp);
    }
    public:
        template<typename T, typename Compare = less<T>>
        static void mergeSort(vector<T> &v, Compare cmp = {}){
            if(v.size() < 2) return;
            mergesortAlgo(v, 0, v.size()-1, cmp);
        }
        
        template<typename T, typename Compare = less<T>>
        static void quickSort(vector<T> &v, Compare cmp = {}){
            if(v.size() < 2) return;
            quickSortAlgo(v, 0, v.size()-1, cmp);
        }
};


int main() {
    vector<int> v1 = {9, 2, 7, 1, 5, 2, 8, 3};
    vector<int> v2 = v1;

    Algorithm::mergeSort(v1);
    Algorithm::quickSort(v2);

    cout << "Merge Sort (Ascending): ";
    for (auto x : v1) cout << x << " ";

    cout << "\nQuick Sort (Ascending): ";
    for (auto x : v2) cout << x << " ";

    Algorithm::mergeSort(v1, greater<int>{});
    Algorithm::quickSort(v2, greater<int>{});

    cout << "\nMerge Sort (Descending): ";
    for (auto x : v1) cout << x << " ";

    cout << "\nQuick Sort (Descending): ";
    for (auto x : v2) cout << x << " ";

    vector<string> names = {"banana", "apple", "mango", "cherry"};
    Algorithm::mergeSort(names, greater<string>{});

    cout << "\nString Sort (Descending): ";
    for (const auto& name : names) cout << name << " ";

    vector<int> edgeCases[] = {
        {},
        {1},
        {5, 5, 5, 5},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1}
    };

    for (auto v : edgeCases) {
        Algorithm::quickSort(v);
        cout << "\nEdge case: ";
        for (auto x : v) cout << x << " ";
    }

    return 0;
}