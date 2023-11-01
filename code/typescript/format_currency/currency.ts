export const toGBP = (numberString: string) => {
  const number: number = parseFloat(numberString);
  const formatted: string = new Intl.NumberFormat('en-GB', {
    style: 'currency',
    currency: 'GBP',
    minimumFractionDigits: 2,
  }).format(number);
  return formatted;
};