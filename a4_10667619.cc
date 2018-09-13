int main()
{
    int x, y;
    cout << "Enter the first number" << endl;
    cin >> x;
    cout << "Enter the second number" << endl;
    cin >> y;

    int xy = min(x,y);
    int GCD = 1;

    for (int i=1; i<= xy; i++)
    {
        if (x%i==0 && y%i==0)
        {
            GCD = max(GCD,i);
        }
    }
    cout << "The Greatest Common Divisor is:  " << GCD;
    return 0;
}