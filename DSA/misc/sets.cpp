int n;
cout << "enter size of array: " << endl;
cin >> n;



int arr[n];
cout << "enter " << n << " elements into the array: " << endl;
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}



cout << "elements are: " << endl;
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}