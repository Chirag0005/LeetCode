// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int write = 0; // Pointer for writing to the array
//         int read = 0;  // Pointer for reading through the array

//         while (read < n) {
//             char currentChar = chars[read];
//             int count = 0;

//             // Count the number of consecutive characters
//             while (read < n && chars[read] == currentChar) {
//                 read++;
//                 count++;
//             }

//             // Write the character to the array
//             chars[write++] = currentChar;

//             // If the count is greater than 1, write the count
//             if (count > 1) {
//                 // Convert count to string and write each digit
//                 string countStr = to_string(count);
//                 for (char c : countStr) {
//                     chars[write++] = c;
//                 }
//             }
//         }

//         return write; // Return the new length of the compressed array
//     }
// };

class Solution {
public:
    int compress(vector<char>& chars){
        int n = chars.size();
        int write=0;
        int read=0;

        while(read<n){
            char current = chars[read];
            int count =0;
            while(read<n && chars[read]==current){
                read++;
                count++;
            }

            chars[write++]=current;

            if(count>1){
                string digit = to_string(count);
                for(char ch : digit){
                    chars[write++]=ch;
                }
            }
        }
        return write;
    }
};