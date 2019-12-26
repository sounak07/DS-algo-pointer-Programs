vector<vector<int>> generate(int numRows)
{

    //vector<int> (1,1) gives [[1],[1],[1],[1],[1]]

    vector<vector<int>> triangle(numRows, vector<int>(1, 1));
    vector<int> prev;

    for (int c = 1; c < numRows; c++)
    {

        prev = triangle[c - 1];

        for (int i = 1; i < c; i++)
        {
            triangle[c].push_back(prev[i] + prev[i - 1]);
        }

        triangle[c].push_back(1);
    }

    return triangle;
}