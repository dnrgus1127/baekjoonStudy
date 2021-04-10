using OpenQA.Selenium.Chrome;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using OpenQA.Selenium;
using ConsoleApp3.models;
using System.Threading;

namespace ConsoleApp3
{
    class Program
    {
        static void Main(string[] args)
        {
            ChromeDriverService service = ChromeDriverService.CreateDefaultService();
            service.HideCommandPromptWindow = true;
            ChromeOptions option = new ChromeOptions();
            option.AddArguments("Headless");

            List<total_amount> total_amounts = new List<total_amount>();
            var db = new MyDbContext();

            ChromeDriver driver = new ChromeDriver(service, option);
            driver.Url = "https://finance.naver.com/sise/sise_market_sum.nhn?&page=1";
            List<IWebElement> list = driver.FindElements(By.CssSelector("body div div div div table tbody tr")).ToList();

            foreach(IWebElement x in list)
            {
                try
                {
                    List<IWebElement> list1 = x.FindElements(By.CssSelector("td")).ToList();

                    total_amounts.Add(new total_amount()
                    {
                        number = int.Parse(list1[0].Text),
                        name = list1[1].Text,
                        price = int.Parse(list1[2].Text.Replace(",","")),
                        diff = int.Parse(list1[3].Text.Replace(",", "")),
                        rate = list1[4].Text,
                        one_price = int.Parse(list1[5].Text.Replace(",", "")),
                        total_price = int.Parse(list1[6].Text.Replace(",","")),
                        total_size = int.Parse(list1[7].Text.Replace(",", "")),
                        forign = float.Parse(list1[8].Text.Replace(",", "")),
                        volume = int.Parse(list1[9].Text.Replace(",", "")),
                        Per = float.Parse(list1[10].Text.Replace(",", "")),
                        Roe = float.Parse(list1[11].Text.Replace(",", "")),
                    }) ;
                    Console.WriteLine("[" + list1[1].Text + "]" + " 저장 완료");
                    Thread.Sleep(100);
                    
                }
                catch { }
            }
            foreach(total_amount t_a in total_amounts)
            {
                try
                {
                    db.Add(t_a);
                    db.SaveChanges();
                    Thread.Sleep(100);
                    
                }
                catch { }      
            }
            Console.WriteLine("데이터 저장 완료\n아무 키 입력..");
            driver.Quit();
          
           // Console.ReadLine();

        }
    }
}
