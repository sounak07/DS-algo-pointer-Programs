class Solution
{
public:
    double pow(double x, long long int n)
    {
        if (n == 1)
            return x;
        else
        {
            double k = pow(x, n / 2);

            if (n % 2 == 0)
                return k * k;
            else
                return k * k * x;
        }
    }

    double myPow(double x, long long int n)
    {

        if (n == 0)
        {
            return 1;
        }

        if (n < 0)
        {
            return pow(1 / x, -1 * n);
        }
        else
        {
            return pow(x, n);
        }
    }
};