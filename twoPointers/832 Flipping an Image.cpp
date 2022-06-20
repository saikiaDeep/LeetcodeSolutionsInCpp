class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i=0;i<image.size();i++)
        {
            image[i]=horizontal(image[i]);
            image[i]=invert(image[i]);
        }
        return image;
    }
vector<int> horizontal(vector<int>& part)
{
    int i=0;
    int j=part.size()-1;
    while(j>i)
    {
        int temp=part[i];
        part[i]=part[j];
        part[j]=temp;
        j--;
        i++;

    }
    return part;
}
vector<int> invert(vector<int>& part)
{
    for (int i = 0; i < part.size(); i++)
    {
        if(part[i])
        {
            part[i]=0;
        }
        else
        {
            part[i]=1;
        }
        /* code */
    }
    
    return part;
}
};