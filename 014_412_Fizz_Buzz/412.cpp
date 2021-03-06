/*
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.
*/

class MySolution {
public:
    vector<string> fizzBuzz(int n) {
        int x = 1;
        vector<string> r;
        while(x <= n){
            string s;
            if( (x%3 != 0)  && (x%5 != 0) )
                s += to_string(x);
            else if((x%3 == 0) && (x%5 != 0))
                s += "Fizz";
            else if((x%3 != 0) && (x%5 == 0))
                s += "Buzz";
            else
                s += "FizzBuzz";
                
            r.push_back(s);
            x++;
        }
        return r;
    }
};
