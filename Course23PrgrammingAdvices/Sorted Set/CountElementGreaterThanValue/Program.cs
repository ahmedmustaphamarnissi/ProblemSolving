class Program
{
    static int CountGreaterThan(SortedSet<int> set, int value)
    {
        return set.GetViewBetween(value + 1, int.MaxValue).Count;
    }

    static void Main()
    {
        SortedSet<int> set = new SortedSet<int> { 1, 2, 3, 4, 5 };
        int value = 3;
        Console.WriteLine(CountGreaterThan(set, value)); // Output: 2
        Console.ReadKey();
    }
}