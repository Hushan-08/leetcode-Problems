class Solution {
public:
    int romanToInt(string s) {
            int n = 1;
    vector<int> v;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == 'I'){
                v.push_back(1);
            }

            else if(s[i] == 'V'){
                v.push_back(5);
            }
            
            else if(s[i] == 'X'){
                v.push_back(10);
            }
            else if(s[i] == 'L'){
                v.push_back(50);
            }
            else if(s[i] == 'C'){
                v.push_back(100);
            }
            else if(s[i] == 'D'){
                v.push_back(500);
            }

            else 
            v.push_back(1000);

        }

        int number = 0;
        for(int i = 0; i < v.size() ; i++){
            if(i + 1 < v.size() && v[i + 1] > v[i]){
                int x;
                x = v[i+1]-v[i];
                number += x;
                   i++;
            }

            else
            number += v[i];
        }

        return number;
    }
};