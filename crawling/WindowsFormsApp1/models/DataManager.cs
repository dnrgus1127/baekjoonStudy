using System;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ConsoleApp3.models;
using MySql.Data.MySqlClient;
using System.Configuration;



namespace WindowsFormsApp1.models
{
    class DataManager
    {
        public static DataSet GetData()
        {
            DataSet ds = new DataSet();
            using (MySqlConnection connection = new MySqlConnection("Server=127.0.0.1;Database=test1;Uid=root;Pwd=root;"))
            {
                connection.Open();
                string query = "SELECT * FROM total_amounts";
                MySqlDataAdapter adapter = new MySqlDataAdapter(query, connection);
                adapter.Fill(ds);
                return ds;
                
            }

        }
    }
}
