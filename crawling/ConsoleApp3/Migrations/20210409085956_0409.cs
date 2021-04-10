using Microsoft.EntityFrameworkCore.Metadata;
using Microsoft.EntityFrameworkCore.Migrations;

namespace ConsoleApp3.Migrations
{
    public partial class _0409 : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.CreateTable(
                name: "total_amounts",
                columns: table => new
                {
                    number = table.Column<int>(maxLength: 30, nullable: false)
                        .Annotation("MySql:ValueGenerationStrategy", MySqlValueGenerationStrategy.IdentityColumn),
                    name = table.Column<string>(maxLength: 30, nullable: true),
                    price = table.Column<int>(maxLength: 30, nullable: false),
                    diff = table.Column<int>(maxLength: 30, nullable: false),
                    rate = table.Column<string>(maxLength: 30, nullable: true),
                    one_price = table.Column<int>(maxLength: 30, nullable: false),
                    total_price = table.Column<int>(maxLength: 30, nullable: false),
                    total_size = table.Column<int>(maxLength: 30, nullable: false),
                    forign = table.Column<float>(maxLength: 30, nullable: false),
                    volume = table.Column<int>(maxLength: 30, nullable: false),
                    Per = table.Column<float>(maxLength: 30, nullable: false),
                    Roe = table.Column<float>(maxLength: 30, nullable: false)
                },
                constraints: table =>
                {
                    table.PrimaryKey("PK_total_amounts", x => x.number);
                });
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropTable(
                name: "total_amounts");
        }
    }
}
