vector<int> addArrays(vector<int>& num1, vector<int>& num2) {
    vector<int> result; // Initialize the result vector
    int carry = 0; // Initialize carry

    // Start from the end of both vectors
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) {
            sum += num1[i];
            i--;
        }
        if (j >= 0) {
            sum += num2[j];
            j--;
        }
        carry = sum / 10; // Update carry
        sum = sum % 10; // Get the last digit of sum
        result.push_back(sum); // Add sum to the end of result
    }

    reverse(result.begin(), result.end()); // Reverse the result vector

    return result;
}