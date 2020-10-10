#include<iostream>
using namespace std;
int main() {
        for(int t = 0; t < 12; t++)

    {

        string a, b;

        cin >> a >> b;

        int l_a = a.length();

        int l_b = b.length();

        int move = 0;

        string sum = "";

        //Bigger one will be 'a' and smaller one will be 'b'

        if(l_b > l_a)

        {

            string tmp = b;

            b = a;

            a = tmp;

            int tmp2 = l_b;

            l_b = l_a;

            l_a = tmp2;

        }

        while(l_a > l_b)

        {

            sum += a[move];

            move++;

            l_a--;

        }

        for(int i = 0; i < l_b; i++)

        {

            int value_a = a[move] - '0';

            int value_b = b[i] - '0';

            int value = value_a + value_b;

            int valueTemp = value;

            int moveTmp = move;

            if(value > 9)

            {

                while(value > 9)

                {

                    move--;

                    value = (sum[move] - '0') + 1;

                    if(value <= 9)

                        sum[move] = value + '0';

                    else

                        sum[move] = '0';

                }

                move = moveTmp;

                value = valueTemp;

                value = value % 10;

                sum += value + '0';

            }

            else

                sum += value + '0';

            move++;

        }

        cout << sum << endl;

    }

}