OUTPUT_FORMAT("binary")
ENTRY(loader)
STARTUP(loader.asmo)

SECTIONS
{
    . = 0xC0000000;

    .text ALIGN (0x1000) :
    {
        *(.text)
    }

    .rodata ALIGN (0x1000) :
    {
        *(.rodata*)
    }

    .data ALIGN (0x1000) :
    {
        *(.data)
    }

    .bss ALIGN (0x1000) :
    {
        sbss = .;
        *(COMMON)
        *(.bss)
        ebss = .;
    }
    
    . = ALIGN (0x1000);
    
    _KERNEL_END_ = .;
}