#include <TString.h>

namespace ut{
    Int_t list_files(TString dirname, TString* output) {
        TSystemDirectory dir(dirname.Data(), dirname.Data());
        TList *files = dir.GetListOfFiles();
        int n=0;
        if (files) {
            TSystemFile *file; 
            TString fname; 
            TIter next1(files); 
            while ((file=(TSystemFile*)next1())) {
                fname = file->GetName();
                if (!file->IsDirectory() && fname.EndsWith(".root")) {
                    output[n] = fname;
                    n++;
                }
            }
        }
        return n;
    }
}
