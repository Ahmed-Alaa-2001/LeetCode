/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l=1,r=n;
        while(l<=r){
            long long md=(l+r)/2;
            if(guess(md)==0)return md;
            else if(guess(md)==-1){
                r=md-1;
            }
            else if(guess(md)==1){
                l=md+1;
            }
        }
        return n;
    }
};