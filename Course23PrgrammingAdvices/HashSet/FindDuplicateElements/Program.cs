

class Program
{
    static int [] FindDplicate(int[] nums)
    {
        HashSet<int> st = new HashSet<int>();

        HashSet<int> Duplicate = new HashSet<int>();

        for(int i = 0; i < nums.Length; i++)
        {
            if (st.Contains(nums[i])) Duplicate.Add(nums[i]);
            else st.Add(nums[i]);
        }

        return Duplicate.ToArray();
    }
    static void Main(string[] args)
    {
        int[] nums = { 1, 2, 3, 4, 2, 5, 6, 1 };
        nums = FindDplicate(nums);
        Console.WriteLine(string.Join(" ",nums));

        Console.ReadKey();
    }
}
