class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int counter = 0;
        int res = 0;
        
        while (counter < students.size()) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                counter = 0;
            }
            else {
                counter++;
                int temp = students[0];
                
                students.erase(students.begin());
                students.push_back(temp);
            }
        }
        
        res = students.size();
        
        return students.size();
    }
};
