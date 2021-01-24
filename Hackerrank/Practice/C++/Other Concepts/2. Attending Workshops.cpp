#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops


struct Workshop
{
    int start_time;
    int end_time;
    int duration;
};

struct Available_Workshops 
{
    int workshop_count;
    std::vector<Workshop*> workshop_list;
};

Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    auto available_workshops = new Available_Workshops();
    for(int i=0;i<n;i++)
    {
        auto workshop = new Workshop();
        workshop->start_time = start_time[i];
        workshop->duration = duration[i];
        workshop->end_time = start_time[i] + duration[i];

        available_workshops->workshop_list.push_back(workshop);
    }

    available_workshops->workshop_count = n;

    return available_workshops;
}

int CalculateMaxWorkshops(Available_Workshops* p_pAvWS) {
    std::sort(p_pAvWS->workshop_list.begin(), p_pAvWS->workshop_list.end(), [](Workshop* A, Workshop* B) {
        return A->end_time < B->end_time;
    });
    
    int ret = 0; 
    int current_end_time = 0;

    for(int i = 0; i < p_pAvWS->workshop_count; i++) 
    {
        if ( p_pAvWS->workshop_list[i]->start_time >= current_end_time ) 
        {
            ret++;
            current_end_time = p_pAvWS->workshop_list[i]->end_time;
        }
    }
    return ret;
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
