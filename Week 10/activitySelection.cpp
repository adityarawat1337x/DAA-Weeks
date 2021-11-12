#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> activity(n);

    for (int i = 0; i < n; i++){
        cin >> activity[i].first;
    }


    for (int i = 0; i < n; i++){
        cin >> activity[i].second;
    }

    sort(activity.begin(), activity.end(), comp);

    int lastEnd=-1;
    vector<int> act;

    int i = 1;
    for (auto it : activity)
    {
        if(it.first >=lastEnd){
            lastEnd = it.second;
            act.push_back(i);
        }
        i++;
    }

    cout << "No. of non conflicting activities: " << act.size();
    cout << "List of selected activities: ";
    for (auto it : act){
        cout << it << ", ";
    }
        return 0;
}
