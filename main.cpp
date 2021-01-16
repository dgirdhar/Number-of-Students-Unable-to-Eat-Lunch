class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int counter = 0;
        int res = 0;
        int studentsCounter = 0;
        int sanwichesCounter = 0;
        int studentsSize = students.size();
        
        while (counter < studentsSize && studentsCounter < students.size()) {
            if (students[studentsCounter] == sandwiches[sanwichesCounter]) {
                studentsCounter++;
                sanwichesCounter++;
                studentsSize--;
                counter = 0;
            }
            else {
                counter++;
                int temp = students[studentsCounter++];
                
                students.push_back(temp);
            }
        }
        
        res = students.size() - studentsCounter;
        
        return res;
    }
};
