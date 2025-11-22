using System.Collections;

public class Program
{
    public static void Main(string[] Args)
    {
        BitArray Lights = new BitArray(8);
        Lights.SetAll(false);

        Lights[3] = true;
        Lights.Set(6, true);

        for(int i = 0; i < 8; i++)
        {
            Console.WriteLine("Light" + i + " " + (Lights[i] ? "ON" : "OFF"));
        }

        Lights.SetAll(false);
        Console.WriteLine("\nResult after Turn of all lights : ");
        for (int i = 0; i < 8; i++)
        {
            Console.WriteLine("Light" + i + " " + (Lights[i] ? "ON" : "OFF"));
        }
        Console.ReadKey();
    }
}
