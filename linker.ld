SECTIONS
{
	. = 0x8000000;
	.interrupt_vector :
	{
		* (.interrupt_vector);
	}
	.interrupt_handler :
	{
		* (.interrupt_handler);
	}
	.text :
	{
		* (.text);
	}
}
