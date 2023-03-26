class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
          if (numerator == 0) return "0";
    if (denominator == 0) return "";

    string result = "";
    if ((numerator < 0) ^ (denominator < 0)) result += "-";
    long long num = abs((long long)numerator);
    long long den = abs((long long)denominator);
    result += to_string(num / den);

    long long remainder = num % den;
    if (remainder == 0) return result;
    result += ".";
    unordered_map<long long, int> remainderMap;
    while (remainder != 0) {
        if (remainderMap.find(remainder) != remainderMap.end()) {
            result.insert(remainderMap[remainder], "(");
            result += ")";
            break;
        }
        remainderMap[remainder] = result.size();
        remainder *= 10;
        result += to_string(remainder / den);
        remainder %= den;
    }
    return result;
        
    }
    
};
