#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop{
    int start_time,duration,end_time;
};

struct Available_Workshops{
    int n;
    Workshop* ptr_workshops;
};

Available_Workshops* initialize (int start_time[], int duration[], int n){
    
    Workshop* arrayWorkshops = new Workshop[n];
    for(int i=0;i<=n;i++){
        arrayWorkshops[n].start_time=start_time[i];
        arrayWorkshops[n].duration=duration[i];
        arrayWorkshops[n].end_time=start_time[i]+duration[i];
    }
    
    Available_Workshops tmp_AW = {n,arrayWorkshops};
    
    return &(tmp_AW);
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    return 0;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
