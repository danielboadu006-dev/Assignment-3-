#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

// 1. Sum of two integers
int sum(int x, int y) {
    return x + y;
}

// 2. Count vowels in a string
int countVowels(const string& s) {
    int count = 0;
    for (char c : s) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

// 3. Average of a list of integers
double average(const vector<int>& nums) {
    if (nums.empty()) return 0.0;
    int total = accumulate(nums.begin(), nums.end(), 0);
    return static_cast<double>(total) / nums.size();
}

// 4. Remove vowels from a sentence
string removeVowels(const string& sentence) {
    string result;
    for (char c : sentence) {
        char lower = tolower(c);
        if (lower != 'a' && lower != 'e' && lower != 'i' &&
            lower != 'o' && lower != 'u') {
            result += c;
        }
    }
    return result;
}

// 5. Longest string in a list
string longestString(const vector<string>& words) {
    string longest = "";
    for (const string& word : words) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }
    return longest;
}

// 6. Median of a list of integers
double median(vector<int> nums) {
    if (nums.empty()) return 0.0;

    sort(nums.begin(), nums.end());
    int n = nums.size();

    if (n % 2 == 0) {
        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
    } else {
        return nums[n / 2];
    }
}

// 7. Remove even numbers from a list
vector<int> removeEvens(const vector<int>& nums) {
    vector<int> result;
    for (int n : nums) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
    }
    return result;
}

// 8. Sort strings alphabetically
vector<string> sortStrings(vector<string> words) {
    sort(words.begin(), words.end());
    return words;
}

// 9. Sum of a list of integers
int sumList(const vector<int>& nums) {
    return accumulate(nums.begin(), nums.end(), 0);
}

// 10. Reverse each string in a list
vector<string> reverseStrings(const vector<string>& words) {
    vector<string> result = words;
    for (string& word : result) {
        reverse(word.begin(), word.end());
    }
    return result;
}

// Optional: main function for testing
int main() {
    cout << "Sum of 3 and 4: " << sum(3, 4) << endl;

    cout << "Vowels in 'Hello World': " << countVowels("Hello World") << endl;

    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Average: " << average(nums) << endl;

    cout << "Without vowels: " << removeVowels("This is a sentence") << endl;

    vector<string> words = {"apple", "banana", "pear", "strawberry"};
    cout << "Longest string: " << longestString(words) << endl;

    cout << "Median: " << median(nums) << endl;

    vector<int> odds = removeEvens(nums);
    cout << "After removing evens: ";
    for (int n : odds) cout << n << " ";
    cout << endl;

    vector<string> sortedWords = sortStrings(words);
    cout << "Sorted strings: ";
    for (const string& w : sortedWords) cout << w << " ";
    cout << endl;

    cout << "Sum of list: " << sumList(nums) << endl;

    vector<string> reversedWords = reverseStrings(words);
    cout << "Reversed strings: ";
    for (const string& w : reversedWords) cout << w << " ";
    cout << endl;

    return 0;
}