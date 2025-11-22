
class Program
{
    static void Main()
    {
        SortedSet<int> set = new SortedSet<int> { 1, 2, 3, 4, 5 };
        var range = set.GetViewBetween(2, 4);
        range.Clear();


        Console.WriteLine(string.Join(", ", set)); // Output: 1, 5
        Console.ReadKey();
    }
}
