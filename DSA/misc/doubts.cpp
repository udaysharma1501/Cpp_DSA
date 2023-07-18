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
// string first_name;
    // cin>>first_name;
    // first_name.append(" sharma");
    // cout<<first_name<<endl;

    // string s;
    // s.assign("set");
    // cout<<s<<endl;

    // string s = "uday";
    // cout<<s.at(0);

    // string s = "uday";
    // cout<<s.back()<<endl;

    //?????????????????????????????????????????
    // string s;
    // s.begin();

    // string s = "uday";
    // s.pop_back();
    // cout<<s<<endl;

    // string s = "uday";
    // s.push_back('x');
    // cout<<s<<endl;

    string s = "uday";
    cout<<s.c_str();
    // cout<<s;