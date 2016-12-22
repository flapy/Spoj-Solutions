// C++ program to demonstrate Range Update
// and Range Queries using BIT
#include <iostream>
using namespace std;

#define lli long long int

 lli readInt () {
	bool minus = false;
	lli result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

// Returns sum of arr[0..index]. This function assumes
// that the array is preprocessed and partial sums of
// array elements are stored in BITree[]
lli getSum(lli BITree[], lli index)
{
    lli sum = 0; // Iniialize result
  
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
  
    // Traverse ancestors of BITree[index]
    while (index>0)
    {
        // Add current element of BITree to sum
        sum += BITree[index];
  
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}
  
// Updates a node in Binary Index Tree (BITree) at given index
// in BITree.  The given value 'val' is added to BITree[i] and 
// all of its ancestors in tree.
void updateBIT(lli BITree[], lli n, lli index, lli val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
  
    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
       // Add 'val' to current node of BI Tree
       BITree[index] += val;
  
       // Update index to that of parent in update View
       index += index & (-index);
    }
}
 
// Returns the sum of array from [0,x]
lli sum(lli x,lli BITTree1[],lli BITTree2[])
{
    return (getSum(BITTree1,x) * x) - getSum(BITTree2,x);   
}
 
void updateRange(lli BITTree1[],lli BITTree2[],lli n,
                                lli val,lli l,lli r)
{
    // Update Both the Binary Index Trees
    // As discussed in the article
 
    // Update BIT1
    updateBIT(BITTree1,n,l,val);
    updateBIT(BITTree1,n,r+1,-val);
 
    // Update BIT2
    updateBIT(BITTree2,n,l,val*(l-1));
    updateBIT(BITTree2,n,r+1,-val*r);
}   
 
lli rangeSum(lli l,lli r,lli BITTree1[],lli BITTree2[])
{
    // Find sum from [0,r] then subtract sum 
    // from [0,l-1] in order to find sum from
    // [l,r]
    return sum(r,BITTree1,BITTree2) - sum(l-1,BITTree1,BITTree2);
}
 

lli *constructBITree(lli n)
{
    // Create and initialize BITree[] as 0
    lli *BITree = new lli[n+1];
    for (lli i=1; i<=n; i++)
        BITree[i] = 0;
  
    return BITree;
}
 
//Driver Program to test above function
int main()
{
	lli t;
	t = readInt();
	while (t--)
	{
    	lli n, u;
    	n = readInt();
    	u = readInt();
	    // Construct two BIT
	    lli *BITTree1, *BITTree2;
	     
	    // BIT1 to get element at any index
	    // in the array
	    BITTree1 = constructBITree(n);
	     
	    // BIT 2 maintains the extra term
	    // which needs to be subtracted
	    BITTree2 = constructBITree(n);
	 
	    lli l, r, val;
	 	while (u--)
	 	{
	    	lli type;
	    	type = readInt();
	    	switch (type)
	    	{
	    		case 0:
	    			l = readInt();
	    			r = readInt();
	    			val = readInt();
	    			l--;
	    			r--;
	    			updateRange(BITTree1,BITTree2,n,val,l,r);
	    			break;
	    		case 1:
	    			l = readInt();
	    			r = readInt();
	    			l--;
	    			r--;
	    			cout << rangeSum(l,r,BITTree1,BITTree2) << endl;
	    			break;
	    	}
		}
	}
    return 0;
}