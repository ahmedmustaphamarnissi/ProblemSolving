
class Program
{
    static List<char> GetAllCommonLetters(string[] Words)
    {
        int n = Words.Length;
        Dictionary<char, bool> map = new Dictionary<char, bool>();
        List<char> CummonChar = new List<char>();

        for(int i=(int)'A'; i<(int)'Z'; i++)
        {
            map.Add((char)i, false);
        }

        
        foreach(var item in map.Keys)
        {
            int counter = 0;
            foreach (var word in Words)
            {
                string Word = word.ToUpper();
                if (Word.Contains(item))
                    counter++;
                else
                    break;

                if (counter == n)
                    map[item] = true;
            }

        }
        foreach(var item in map)
        {
            if (item.Value) CummonChar.Add(item.Key);
        }
        return CummonChar;

        
    }
    static void Main(string[] Args)
    {
        string[] Words = { "bella", "label", "roller" };
        Console.WriteLine(string.Join(" ", GetAllCommonLetters(Words)));

    }
}