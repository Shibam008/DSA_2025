#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> height) 
{
    int start = 0, end = height.size()-1;
    int maxWater = 0;
    
    while(start < end) 
    {
        int width = end - start;
        int minHeight = min(height[start], height[end]);
        int currArea = width * minHeight;
        maxWater = max(maxWater, currArea);

        if(height[start] < height[end]) start++;
        else end--;
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height);
    return 0;
}