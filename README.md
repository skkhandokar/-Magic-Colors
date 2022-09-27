# -Magic-Colors
Arif, the magician is putting some magic colors in a box serially. But he is not providing any divider between the colors. So, the color may be mix up instantly.

There are three types of colors- Red, Green and Blue. How they could mix up is given below -

    Red+Blue = Purple
    Red+Green = Yellow
    Blue+Green = Cyan

And there are some other problems. If two same type of colors mix up, they will vanish each other. For example if two Purple colors get together, both of them will be vanished.

Can you help the magician to get the final colors that will be in the box?

Input Format

    First line will contain T, the number of test cases.
    Next line will contain N, number of colors in the box.
    Next line will contain N characters (R,G,B only) , first capital letter of the color.

Constraints

    0 < T <= 100
    0 < N <= 100

Output Format

    Output the first capital letter of the colors that are saved finally.

Sample Input 0

2
3
RBG
4
RGBB

Sample Output 0

PG
Y

Sample Input 1

5
6
RGGRRG
6
RGRGRG
4
RGGR
5
RGGGR
4
RGGB

Sample Output 1

Y
Y

YR
YC

