using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using WindowsFormsApp1.models;

namespace WindowsFormsApp1
{
    public partial class Dataform : Form
    {
        public Dataform()
        {
            InitializeComponent();
        }

        private void Dataform_Load(object sender, EventArgs e) // Dataform 로드시 실행되는 함수
        {
            DataSet dataset = DataManager.GetData();
            dataGridView1.DataSource = dataset.Tables[0];

            dataGridView1.AlternatingRowsDefaultCellStyle.BackColor = Color.Pink;
            dataGridView1.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            dataGridView1.EnableHeadersVisualStyles = false;
            dataGridView1.ColumnHeadersDefaultCellStyle.BackColor = Color.RosyBrown;
            //dataGridView1.RowHeadersDefaultCellStyle.BackColor = Color.SeaGreen;
            dataGridView1.Columns[0].HeaderText = "N";
            dataGridView1.Columns[1].HeaderText = "종목명";
            dataGridView1.Columns[2].HeaderText = "현재가";
            dataGridView1.Columns[2].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[3].HeaderText = "전일비";
            dataGridView1.Columns[3].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[4].HeaderText = "등락률";
            dataGridView1.Columns[4].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[5].HeaderText = "액면가";
            dataGridView1.Columns[5].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[6].HeaderText = "시가총액";
            dataGridView1.Columns[6].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[7].HeaderText = "상장주식수";
            dataGridView1.Columns[7].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[8].HeaderText = "외국인비율";
            dataGridView1.Columns[8].DefaultCellStyle.Format = "N2";
            dataGridView1.Columns[9].HeaderText = "거래량";
            dataGridView1.Columns[9].DefaultCellStyle.Format = "N0";
            dataGridView1.Columns[10].HeaderText = "PER";
            dataGridView1.Columns[10].DefaultCellStyle.Format = "N2";
            dataGridView1.Columns[11].HeaderText = "ROE";
            dataGridView1.Columns[11].DefaultCellStyle.Format = "N2";



            dataGridView1.Sort(dataGridView1.Columns[0], ListSortDirection.Ascending);
        }
    }
}
