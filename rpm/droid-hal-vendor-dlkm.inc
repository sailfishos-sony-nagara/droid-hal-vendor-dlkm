# This file should be %%included into a device specific spec file
# where macros are defined:
#
# Device information:
# device:        device name used in droid-hal-* package names

%define mainver %(rpm -q --qf '%{VERSION}' droid-hal-%{device}-kernel)
%define relver %(rpm -q --qf '%{Release}' droid-hal-%{device}-kernel)

Name:       droid-hal-%{device}-vendor-dlkm
Summary:    Vendor DLKM modules for %{device}
Version:    %{mainver}
Release:    %{relver}
Group:      Kernel/Linux Kernel
License:    GPLv2

BuildRequires:  droid-hal-%{device}-kernel

Requires: droid-hal-%{device}-img-boot = %{mainver}-%{relver}
Requires: droid-hal-%{device}-vendor_boot = %{mainver}-%{relver}

%description
%{summary}

%build
pwd
ls -lh

%install

mkdir -p $RPM_BUILD_ROOT/
cp -a vendor_dlkm $RPM_BUILD_ROOT/

%files
%defattr(-,root,root,-)
/vendor_dlkm
