class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = ""; // Initialize the result string
        int carry = 0; // Initialize carry

        // Start from the end of both strings
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum = sum + (num1[i] - '0'); // Subtract '0' to convert char to int
                i--;
            }
            if (j >= 0) {
                sum = sum + (num2[j] - '0'); // Subtract '0' to convert char to int
                j--;
            }
            carry = sum / 10; // Update carry
            sum = sum % 10; // Get the last digit of sum
            result = char(sum + '0') + result; // Convert int to char and add to the front of result
        }

        return result;
    }
};