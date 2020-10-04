vector<int>seg;
#define ZERO 0 // define the zero value,its 0 for sum,1 for product
void merge(const int &a,const int &b,int &c)
{
    c=max(a,b);
    c=min(a,b);
    c=a+b;
    c=__gcd(a,b); // use any of merge method
}
void build(int pos,int ss,int se,vector<int>&a)
{
    if(pos==0)
        seg.resize(4*(se+1)+1);
    if(ss==se)
    {
        seg[pos]=a[ss];
        return;
    }
    int mid=(ss+se)/2;
    build(2*pos+1,ss,mid);
    build(2*pos+2,mid+1,se);
    merge(seg[2*pos+1],seg[2*pos+2],seg[pos])
}
int query(int pos,int ss,int se,int l,int r)
{
    if(l>se || r  < ss)
        return ZERO;
    if(ss >=l && se<=r)
        return seg[pos];
    int mid=(ss+se)/2;
    int q1=query(2*pos+1,ss,mid,l,r);
    int q2=query(2*pos+2,mid+1,se,l,r);
    int ans;merge(q1,q2,ans);
    return ans;
}
void update(int pos,int ss,int se,int index,int value)
{
    if(index <ss || index >se)
        return ;
    if(ss==se)
    {
        seg[pos]=value;
        return ;
    }
    int mid=(ss+se)/2;
    update(2*pos+1,ss,mid,index,value);
    update(2*pos+2,mid+1,se,index,value);
    merge(seg[2*pos+1],seg[2*pos+2],seg[pos]);
}

