vector<int> plusOne(vector<int> &digits) {
    int carry=1;
    vector <int> v;
    while(digits.size()>0){
        int x = digits.back();
        digits.pop_back();
        x = x + carry;
        v.insert(v.begin(), x%10);
        carry = x/10;
    }
    if (carry>0){
        v.insert(v.begin(), carry);
    }
    return v;

}

void printVector(vector<int>& v)
{
    for(unsigned i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int a[]={1,2,9,9};
    vector<int> d(&a[0], &a[0]+sizeof(a)/sizeof(int));
    vector<int> v = plusOne(d);
    printVector(v);
    for(unsigned i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
        
    return 0;
}