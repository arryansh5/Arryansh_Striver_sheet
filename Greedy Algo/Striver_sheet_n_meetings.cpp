class Solution {
public:
    // Function to get all meetings that can be scheduled
    vector<int> maxMeetings(vector<int>& start, vector<int>& end) {
        vector<tuple<int , int , int>> meetings ; 
        for(int i = 0 ; i < start.size() ; i++){
            meetings.push_back({end[i] , start[i] , i+1}); 
        }
        sort(meetings.begin() , meetings.end()); 
        vector<int> res ; 
        int lastend = INT_MIN ; 

        for(auto& x : meetings){ 
            int e = get<0>(x); 
            int s = get<1>(x); 
            int index = get<2>(x); 

            if(s > lastend){
                res.push_back(index); 
                lastend = e;
            }



        }

        return res ;
    }
};