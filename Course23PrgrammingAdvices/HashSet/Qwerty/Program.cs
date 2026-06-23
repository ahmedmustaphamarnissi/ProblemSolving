
class Program
{
    static string[] GetQwerty(string[] words)
    {
        HashSet<int> map = new HashSet<int>
        {
            {'Q'},{'W'},{'E'},{'R'},{'T'},{'Y'}
        };

        List<string> Words = new List<string>();

        for (int i = 0; i < words.Length; i++)
        {
            int counter = 0;
            for (int j = 0; j < words[i].Length; j++)
            {
                if (map.Contains(char.ToUpper(words[i][j])))
                    counter++;
            }
            if (counter == 0) Words.Add(words[i]);
        }
        return Words.ToArray();
    }
    static void Main(string[] Args)
    {
        string[] words = { "Hello", "Alaska", "Dad", "Peace" };
        string []Qwerty = GetQwerty(words);

        Console.WriteLine(string.Join(" ", Qwerty));
    }
}