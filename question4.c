int largestRectangleArea(int* heights, int heightsSize){
    int i, j, bars, area;
    bool calculated;
    int max = 0;
    
    for (i = 0; i < heightsSize; i++) {        
        bars = 1;
        calculated = false;
        
        j = i - 1;
        while (j >= 0) {
            if (heights[j] == heights[i]) {
                calculated = true;
                break;
            } else if (heights[j] > heights[i]) {
                bars++;
                j--;
            }
            else {
                break;
            }
        }
        
        if (calculated == true)
            continue;
        
        j = i + 1;
        while (j < heightsSize) {
            if (heights[j++] >= heights[i])
                bars++;
            else
                break;
        }
        
        area = heights[i] * bars;
        
        if (area > max)
            max = area;
    }
    
    return max;
}
