using Newtonsoft.Json;
using System;
using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using YamlDotNet.Serialization;

namespace MIDTesters
{
    class dumper
    {
        public static void print(string s, Object o, string name)
        {
            as_ObjectDumper(s, o, name);
       //     as_json(s, o, name);
       //     as_yaml(s, o, name);

        }
        public static void print(byte[] s, Object o, string name)
        {
            print(ByteArrayToString(s), o, name);
        }
        
        private static void as_ObjectDumper(string s, Object o, string name)
        {
            using (var writer = new System.IO.StringWriter())
            {
                
                ObjectDumper.Dumper.Dump(o, "Object Dumper", writer);
                //Console.Write(writer.ToString());

                using (System.IO.StreamWriter file =
                new System.IO.StreamWriter($"g:/mids/full/{name}.txt"))
                {
                    file.WriteLine( s+ "\n\n" + writer.ToString());
                }
            }

        }

        private static void as_json(string s, object o, string name)
        {
            string json = JsonConvert.SerializeObject(o, Formatting.Indented);
            using (System.IO.StreamWriter file =
            new System.IO.StreamWriter($"g:/mids/json/{name}.json"))
            {
                file.WriteLine(s + "\n\n" + json);
            }
        }

        private static void as_yaml(string s, object o, string name)
        {
            var stringBuilder = new StringBuilder();
            var serializer = new Serializer();
            serializer.Serialize(new IndentedTextWriter(new StringWriter(stringBuilder)), o);
            using (System.IO.StreamWriter file =
            new System.IO.StreamWriter($"g:/mids/yaml/{name}.yml"))
            {
                file.WriteLine(s + "\n\n" + stringBuilder);
            }
        }

        public static string ByteArrayToString(byte[] byteArray)
        {
            var hex = new StringBuilder(byteArray.Length * 2);
            foreach (var b in byteArray)
            {
                if (b < 0x20 || b > 0x7E)
                {
                hex.AppendFormat(@"\0x{0:x2}", b);
                }
                else
                {
                    hex.AppendFormat(System.Text.Encoding.ASCII.GetString(new byte[] { b }));
                }
            }
            return hex.ToString();
        }
    }
}
