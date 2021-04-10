using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3.models
{
    class total_amount
    {
        [Key]
        [Required]
        [MaxLength(30)]
        public int number { get; set; }
        [MaxLength(30)]
        public string name { get; set; }
        [MaxLength(30)]
        public int price { get; set; }
        [MaxLength(30)]
        public int diff { get; set; }
        [MaxLength(30)]
        public string rate { get; set; }
        [MaxLength(30)]
        public int one_price { get; set; }
        [MaxLength(30)]
        public int total_price { get; set; }
        [MaxLength(30)]
        public int total_size { get; set; }
        [MaxLength(30)]
        public float forign { get; set; }
        [MaxLength(30)]
        public int volume { get; set; }
        [MaxLength(30)]
        public float Per { get; set; }
        [MaxLength(30)]
        public float Roe { get; set; }

    }
}
