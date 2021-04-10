using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3.models
{
    class MyDbContext : DbContext
    {
        public DbSet<total_amount> total_amounts { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseMySql(@"Server=127.0.0.1;Database=test1;User=root;Password=root");
        }
        
    }
}
