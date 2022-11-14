class Solution {
public:

        int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int i=0;i<seats.size();i++)
        {
            ans+=( students[i]>seats[i])?(students[i]-seats[i]):(seats[i]-students[i]);
        }
        return ans;
    }
};
