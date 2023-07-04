/*
--------------------------------------------------------------------------------------------------------------------------------------------
1. how to use for each loop while printing an array being 
                                                        - intialised dynamically
                                                        - a vector
                                                        - having a variable size
for(int x : arr)
    {
        cout<<x<<" ";
    }
------------------------------------------------------------------------------------------------------------------------------------------
2. why doesnt this string reversal work?

string name = "uday";
    char temp[4];
    static int count;
    for(auto ch : name)
    {
        cout<<count<<" "<<ch<<endl;
        temp[count] = ch;
        count++;
    }
    for(int i=4; i>0; i--)
    {
        cout<<temp[count]<<" ";
    }
------------------------------------------------------------------------------------------------------------------------------------------
3. what does it mean when:
        function parameter contains
            1. *
            2. &
            3. &*
            4. **
            5. *&                    


*/