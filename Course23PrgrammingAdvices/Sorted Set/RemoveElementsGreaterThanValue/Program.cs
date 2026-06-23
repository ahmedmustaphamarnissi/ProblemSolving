
public class Program
{
    static void Main(string[] Args)
    {
        SortedSet<int> nums = new SortedSet<int> { 1, 2, 3, 4, 5 };
        int min = nums.Min;

        var items= nums.GetViewBetween(min, 3);
        nums = new SortedSet<int>(items);

        Console.WriteLine(string.Join(", ", nums));
        Console.ReadKey();
    }
}