#include <memory>


#ifndef SPAN
#define SPAN

// Not standard library namespace
namespace nstd {

template<typename T>
using pointer = std::unique_ptr<T>;

template<typename T>
class span
{
    public:
        span() noexcept = default;

    protected:
    private:
        pointer<T> data {nullptr};
};


}; // namespace nstd

#endif 