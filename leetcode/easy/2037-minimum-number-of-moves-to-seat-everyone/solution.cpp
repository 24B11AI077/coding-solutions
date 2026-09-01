class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // Sort both arrays to ensure optimal pairing
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int totalMoves = 0;
        // Iterate through both arrays and calculate the absolute difference
        // for each corresponding student and seat.
        for (int i = 0; i < seats.size(); ++i) {
            totalMoves += abs(seats[i] - students[i]);
        }
        
        return totalMoves;
    }
};