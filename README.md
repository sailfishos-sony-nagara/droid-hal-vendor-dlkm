# Packaging of vendor-dlkm modules

While vendor-dlkm modules are usually packaged into the image, there is no need to do so
on Sailfish. This RPM package will just write all modules to `/vendor_dlkm` without any
special flashing required. However, it does require that the corresponding version of the
kernel boot and vendor_boot images are installed.
