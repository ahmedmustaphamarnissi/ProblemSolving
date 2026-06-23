
using System.Collections;

public class Program
{
    public static void Main(string[] Args)
    {
        List<BitArray> lt = new List<BitArray>();

        for(int i = 0; i < 10; i++)
        {
            lt.Add(new BitArray(5));
        }
        lt[0][0] = true;
        lt[0].Set(1, false); // set values like this or using loop

    }
}
